function pdf = pdf_p(x,Zp, B, mu, w, params)
    pdf = 1./(2*pi*sqrt(params.s2y + params.s2u)) * ...
        exp( -1/(2*params.s2y + params.s2u) * ...
        (f_p_1(x, mu, w) - Zp * B).^2 ) * abs(df_p_1(x, mu, w));
end