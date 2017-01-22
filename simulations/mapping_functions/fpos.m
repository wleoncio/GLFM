function x = fpos(y, w)
    % Inputs:
    %   y: 
    %   w: scalar

    % TODO: make weights W input-dependent
    %W = repmat( 2 ./ max(y,[],1) , size(y,1), 1);
    x = log( exp( w * y ) + 1);
end
